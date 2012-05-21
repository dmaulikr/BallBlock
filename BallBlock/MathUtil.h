//
//  MathUtil.h
//  BallBlock
//
//  Created by ramin on 5/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

NSArray *borderPointsForPoints(CGPoint p1, CGPoint p2);
    
CGPoint minXPoint(CGPoint p1, CGPoint p2);
CGPoint maxXPoint(CGPoint p1, CGPoint p2);

void fillArray(CGPoint *arr, int numPoints, ...);