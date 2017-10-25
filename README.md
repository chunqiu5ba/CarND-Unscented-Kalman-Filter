# Unscented Kalman Filter Project Starter Code
Self-Driving Car Engineer Nanodegree Program

[//]: # (Image References)
[image1]: ./result.png
[image2]: ./result-laser.png
[image3]: ./result-radar.png

In this project utilize an Unscented Kalman Filter to estimate the state of a moving object of interest with noisy lidar and radar measurements. Passing the project requires obtaining RMSE values that are lower that the tolerance outlined in the project reburic. 

## Results

### Prediction with Laser and Radar
|     |RMSE      |
| --- |:--------:|
| px  |0.0712    |
| py  |0.0832    |
| vx  |0.3433    |
| vy  |0.2260    |

![Laser & Radar][image1]

### Prediction with Laser only
|     |RMSE      |
| --- |:--------:|
| px  |0.1112    |
| py  |0.0985    |
| vx  |0.6120    |
| vy  |0.2539    |

![Laser only][image2]

### Prediction with Radar only
|     |RMSE      |
| --- |:--------:|
| px  |0.1615    |
| py  |0.2277    |
| vx  |0.3911    |
| vy  |0.3473    |

![Radari only][image3]

### Prediction from Extended Kalman Filter(for comparison)
|     |RMSE      |
| --- |:--------:|
| px  |0.0974    |
| py  |0.0855    |
| vx  |0.4517    |
| vy  |0.4404    |


---
## Basic Build Instructions

1. mkdir build
2. cd build
3. cmake ..
4. make
5. ./UnscentedKF

INPUT: values provided by the simulator to the c++ program

["sensor_measurement"] => the measurment that the simulator observed (either lidar or radar)


OUTPUT: values provided by the c++ program to the simulator

["estimate_x"] <= kalman filter estimated position x
["estimate_y"] <= kalman filter estimated position y
["rmse_x"]
["rmse_y"]
["rmse_vx"]
["rmse_vy"]

---

## Other Important Dependencies
* cmake >= 3.5
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

