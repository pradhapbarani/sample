//
//  AppDelegate.h
//  Sample
//
//  Created by Barani  on 12/30/16.
//  Copyright © 2016 Barani . All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@class MyOrder;


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property(strong,nonatomic)MyOrder *viewcotroller;
@property(strong,nonatomic)UINavigationController *navigationcotroller;

@property BOOL restrictRotation;


@end

