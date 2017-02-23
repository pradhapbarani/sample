//
//  AppDelegate.h
//  Sample
//
//  Created by Barani  on 12/30/16.
//  Copyright © 2016 Barani . All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property(strong,nonatomic)ViewController *viewcotroller;
@property(strong,nonatomic)UINavigationController *navigationcotroller;

@property BOOL restrictRotation;


@end

