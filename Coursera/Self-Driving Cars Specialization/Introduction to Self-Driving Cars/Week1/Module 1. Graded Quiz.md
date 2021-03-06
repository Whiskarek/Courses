1. **Scenario 1: You’re at home and need to drive to work**

![Scheme](images/1.png?raw=true)
>    * Maintaining a distance to a vehicle ahead
___
2. Which of the following tasks are associated with **perception**?
>    * Estimating the motion of other vehicles
>    * Identifying road signs
___
3. Before leaving, you decide to check the weather. The forecast states that over the next few days there will be both sun and rain along with some fog. Assuming your vehicle exhibits Level 5 autonomy, which of the following **weather conditions** can your vehicle operate?
>    * All of the above
___
4. You enter your autonomous vehicle and it drives your usual route to work. While the vehicle is driving, you decide to take a nap. For **which levels of autonomy** is this safe? (Select all that apply)
>    * 4
>    * 5
___
5. **Scenario 2**: (Assume the car is driving on the right-hand side of the road) .
You’re approaching an all ways stop sign and you want to make a right turn. Your vehicle is denoted in orange. There are 2 pedestrians currently crossing and another vehicle (denoted in green) approaching the stop sign from the left.

![Scheme](images/5.png?raw=true)

This task involves multiple considerations, which of them are **predictive planning**? Select all that apply.
>    * Wait for the pedestrians to finish crossing before turning
>    * The green car arrives at the stop sign after you and plans to  travel straight through the intersection. You choose to move first.
___
6. Here are some rules for driving at a stop sign. Which of the following is an appropriate **priority ranking**?
    1) For non all-way stop signs, stop at a point where you can see oncoming traffic without blocking the intersection
    2) If there are pedestrians crossing, stop until they have crossed
    3) If you reach a stop sign before another vehicle, you should move first if safe
>    * 2, 1, 3
___
7. Which of the following are **off-road objects**? (Select all that apply)
>    * Curbs
>    * Trees
>    * Stop signs
___
8. Suppose your vehicle has **lane keeping assistance**, which of these objects are relevant for its performance? (Select all that apply)
>    * Curbs
>    * Road markings
___
9. Which of the following sensors are used for the **lane keeping assistance**? (Select all that apply)
>    * GPS
>    * LIDAR
>    * IMU
>    * Cameras
___
10. **Scenario 3**: You are on the highway and you see a truck in front of you. Assume the car is driving on the right-hand side of the road. There is also a blue car beside the truck in the other lane.

![Scheme](images/10.png?raw=true)

Your vehicle follows the truck and maintains a constant distance away. What kind of **control** is this?
>    * Longitudinal
___
11. You decide to **change lanes** to pass a truck. What kind of decision is this?
>    * Short term planning
___
12. Which of the following tasks are **rule-based planning**? (Select all that apply)
>    * During a lane change, maintain our current speed or accelerate slightly
>    * If there are vehicles directly beside us on the lane, it is unsafe to lane change.
___
13. Suppose the blue vehicle suddenly brakes and you decide to abort the lane change. If your vehicle can **respond automatically and remain in its own lane**, what is the minimum level of autonomy of your vehicle?
>    * 3
___
14. The blue vehicle returns to normal speed and you can now safely change lanes. Your car is **performing the lane change**, what kind of control is this?
>   * Lateral
___
15. **Scenario 4**: You are almost at work but encounter a construction site.
Assume the car is driving on the right-hand side of the road. Your vehicle is denoted in orange.

![Scheme](images/15_1.png?raw=true)

You see a construction site where the workers are repaving a road full of potholes. They are using jackhammers which can cause dust clouds.
You create the following decision tree for getting through the construction site. From the diagram, which of the following decisions should you make? (**green is true, red is false**)

![Decision Tree](images/15_2.png?raw=true)
>    * B (False)
>    * C (True)
>    * E (True)
___
16. Here are a set of rules for making these decisions, **arrange them in an appropriate prioritization**.
    1) If there are no vehicles ahead, accelerate to the speed limit
    2) Drive slowly in construction zones
    3) If there are pedestrians or workers directly ahead in the current lane, stop
    4) Yield to merging vehicles, if necessary
>    * 3, 4, 2, 1
___
17. **Scenario 5**: You’re finished work and need to drive back home, but it’s nighttime.

![Night](images/17.png?raw=true)

You plan a new path home on your GPS application to avoid the construction site, **what type of planning is this**?
>    * Long term planning
___
18. Your new path goes through a school zone and you see the school zone sign. You decide to slow down despite there being no pedestrians or children (it’s nighttime). What sort of **planning** is this?

![Scheme](images/18.png?raw=true)
>    * Rule based planning
___
