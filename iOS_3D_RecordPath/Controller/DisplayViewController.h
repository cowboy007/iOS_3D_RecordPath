//
//  DisplayViewController.h
//  iOS_2D_RecordPath
//
//  Created by PC on 15/8/3.
//  Copyright (c) 2015年 FENGSHENG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MAMapKit/MAMapKit.h>
#import "AMapRouteRecord.h"

@interface DisplayViewController : UIViewController

- (void)setRecord:(AMapRouteRecord *)record;

@end
