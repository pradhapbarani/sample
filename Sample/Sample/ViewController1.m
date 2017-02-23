//
//  ViewController1.m
//  Sample
//
//  Created by Barani  on 1/8/17.
//  Copyright © 2017 Barani . All rights reserved.
//

#import "ViewController1.h"

#import "AppDelegate.h"

@interface ViewController1 ()

@end

@implementation ViewController1

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self restrictRotation:NO];

    
    // Do any additional setup after loading the view.
}

-(void) restrictRotation:(BOOL) restriction
{
    AppDelegate *appDelegate = (AppDelegate*)[UIApplication sharedApplication].delegate;
    appDelegate.restrictRotation = restriction;
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
