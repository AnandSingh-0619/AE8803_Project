# Autonomous landing with reinforcement learning
Deep reinforcement learning for drone precision landing, docker container for simulation in Gazebo-ROS2 
dashing with PX4-Autopilot controller. 


## Usage <a name="usage"></a>
To start the docker run:
- For ROS2 Dashing:
   ```
   ./run_docker.sh run
   ```

### Test <a name="test"></a>
Open 2 terminals and run the docker in each one of them, as explained above.

In the first one run:
```
ros2 run px4_ros_extended gazebo_runner.py --test --headless
```

#### Agent
In the second one run
```
cd /src/shared
./launch_test_ddpg.sh 0 small 6 3 4500
```



## SImulation video
The simulation video for this implementation can be found at this [link]https://youtu.be/OaIrJ7aA2g0 in which the landing platform is moving linearly. Another simulation video [link]https://youtu.be/3Sl5yUurCLs shows landing of UAV on still platform.


## References <a name="references"></a>
```
@article{
   author = {Alejandro Rodriguez-Ramos and Carlos Sampedro and Hriday Bavle and Paloma de la Puente and Pascual Campoy},
   doi = {10.1007/s10846-018-0891-8},
   issn = {15730409},
   issue = {1-2},
   journal = {Journal of Intelligent and Robotic Systems: Theory and Applications},
   title = {A Deep Reinforcement Learning Strategy for UAV Autonomous Landing on a Moving Platform},
   volume = {93},
   year = {2019},
}
'''
The initial code for the DDPG algorithm and Framework has been taken from [this](https://github.com/vy007vikas/PyTorch-ActorCriticRL) and [this]https://github.com/carlo98/precision_landing_shaping_RL
github repository.
