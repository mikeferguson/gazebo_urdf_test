This package works with ROS Hydro and Gazebo 1.9

It has two launch files. The first "test_ros.launch" will run a standalone node
that parses a simple urdf. It's output should be something like:

        process[test_node-1]: started with pid [13412]
        [ INFO] [1384976724.797526146]: link0
        [ INFO] [1384976724.797583578]: 1
        [ INFO] [1384976724.797600796]: link1

Note that we properly get link0, a length of 1, and link1 as the only child.

The second launch file launches a gazebo plugin that runs the same function,
"test_gazebo.launch". This typically returns:

        [ INFO] [1384976800.617219789, 0.105000000]: link0
        [ INFO] [1384976800.617261508, 0.105000000]: 18443086731357870472
        Segmentation fault (core dumped)


