#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;

Tools::Tools() {}

Tools::~Tools() {}

VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
                              const vector<VectorXd> &ground_truth) {

  VectorXd rmse(4);
  rmse << 0,0,0,0;

  //Check the validity of the following inputs:
  //* the estimate vector size should not be zero
  //* the estimate vector size should equal ground truth vactor size
  if(estimations.size() == 0 || estimations.size() != ground_truth.size()){
    cout << "Invalid extimation or ground_truth data" << endl;
    return rmse;
  }

  //accumulated squared residuals
  for(unsigned int i=0; i < estimations.size(); ++i){

    VectorXd residual = estimations[i] - ground_truth[i];

    //coefeicient-wise multiplication
    residual = residual.array()*residual.array();
    rmse += residual;
  }

    //calculate the mean, squred root
    rmse = rmse/estimations.size();
    rmse = rmse.array().sqrt();

    return rmse;

}

