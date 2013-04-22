//
//  CarInfoListViewController.h
//  TrafficQuery
//
//  Created by hz on 13-4-10.
//  Copyright (c) 2013年 hz. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HomeIntroduce;
@class CarInfo;
@interface CarInfoListViewController : UIViewController{
    CarInfo* carInfo;//cell
    NSArray* data;
    NSArray* weifaArr;
    UITableView* mainTabView;
    HomeIntroduce* delegate;
    
    UILabel* whichCarLabel;
    UILabel* homeManyLabel;
    UILabel* countMoneyLabel;
    
    int money;
    NSMutableDictionary* countDic;
    NSString* carName;
}
@property(nonatomic, retain)NSString* carName;
@property(nonatomic, retain)IBOutlet UILabel* whichCarLabel;
@property(nonatomic, retain)IBOutlet UILabel* homeManyLabel;
@property(nonatomic, retain)IBOutlet UILabel* countMoneyLabel;
@property(nonatomic, retain)IBOutlet UITableView* mainTabView;
@property(nonatomic, retain)NSArray* data;
@property(nonatomic, retain)NSArray* weifaArr;
@property(nonatomic, assign)HomeIntroduce* delegate;

-(NSArray*)carDataNumber:(NSString*)numberStr carJaNumber:(NSString*)carJaStr;

@end