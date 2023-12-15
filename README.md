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
./launch_test_ddpg.sh <run_id> <model> <obs_shape> <action_shape> <num_episodes>
```
Where 'model' is the name of the model to be used, 'paper' or 'small'.
