//
//  ViewController.h
//  Navigator
//
//  Created by Robin Chou on 5/4/13.
//  Copyright (c) 2013 Robin Chou. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MKMapView;

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
- (IBAction)locateStop:(id)sender;
- (IBAction)popViewController:(id)sender;

@end