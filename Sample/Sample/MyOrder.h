//
//  MyOrder.h
//  Sample
//
//  Created by Barani  on 05/03/17.
//  Copyright © 2017 Barani . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyOrderCell.h"

@interface MyOrder : UIViewController<UITableViewDelegate,UITableViewDataSource>

@property(strong,nonatomic)IBOutlet UITableView *table_OrderList;

@end
