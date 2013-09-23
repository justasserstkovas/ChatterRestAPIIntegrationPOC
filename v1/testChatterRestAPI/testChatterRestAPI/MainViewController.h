//
//  MainViewController.h
//  testChatterRestAPI
//
//  Created by Justas Serstkovas on 23/09/2013.
//  Copyright (c) 2013 Justas Serstkovas. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

- (IBAction)showInfo:(id)sender;

@end
