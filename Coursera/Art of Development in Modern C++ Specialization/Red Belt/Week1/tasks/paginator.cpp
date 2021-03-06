#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename Iterator>
class Paginator {
public:

    class Page {
    public:
        Page(Iterator begin, Iterator end) : _size(distance(begin, end)), _begin(begin), _end(end) {}

        const Iterator begin() const {
            return _begin;
        }

        Iterator begin() {
            return _begin;
        }

        const Iterator end() const {
            return _end;
        }

        Iterator end() {
            return _end;
        }

        size_t size() const {
            return _size;
        }

    private:
        size_t _size;
        Iterator _begin;
        Iterator _end;
    };

    using pages_iterator = typename vector<Page>::iterator;
    using pages_const_iterator = typename vector<Page>::const_iterator;

    Paginator(Iterator begin, Iterator end, size_t page_size) {
        while (begin != end) {
            auto it = next(begin, end, page_size);
            pages.push_back({begin, it});
            begin = it;
        }
    }

    size_t size() const {
        return pages.size();
    }

    const pages_const_iterator begin() const {
        return pages.begin();
    }

    pages_iterator begin() {
        return pages.begin();
    }

    const pages_const_iterator end() const {
        return pages.end();
    }

    pages_iterator end() {
        return pages.end();
    }

private:
    vector<Page> pages;

    Iterator next(Iterator iter, Iterator &end, size_t next) {
        while(iter != end && next != 0) {
            ++iter;
            --next;
        }
        return iter;
    }
};

template<typename C>
auto Paginate(C &c, size_t page_size) {
    return Paginator(c.begin(), c.end(), page_size);
}