%%Need x* and u* from labday 2 so run that file first
%%A1 and B1 is the discrete-time state-space model
run('day2_optimalpath.m')

Q = diag([75 30 1 1]); %four states
R = 0.01; %One input

K = dlqr(A1,B1,Q,R)

x_optimal = [x1 x2 x3 x4]';

x_opt = timeseries(x_optimal,t);
