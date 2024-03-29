//
//  VerifyOrderViewController.h
//  DXQ
//
//  Created by 黄修勇 on 12-11-28.
//  Copyright (c) 2012年 http://www.heyuan110.com. All rights reserved.
//

#import "BaseNavigationItemViewController.h"

@interface VerifyOrderViewController : BaseNavigationItemViewController<UITableViewDataSource,UITableViewDelegate>

@property (nonatomic,retain)UITableView *tableView;
@property (nonatomic,retain)NSDictionary *orderInfoDic;
@property (nonatomic,retain)NSDictionary *productInfoDic;
@property (nonatomic,retain)NSDictionary *orderDic;
@property (nonatomic)BOOL needAddress;//default YES

@end
