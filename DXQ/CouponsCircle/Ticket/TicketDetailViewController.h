//
//  TicketDetailViewController.h
//  DXQ
//
//  Created by 黄修勇 on 12-10-21.
//  Copyright (c) 2012年 http://www.heyuan110.com. All rights reserved.
//

#import "BaseViewController.h"
#import "MemberDetailViewController.h"


@class TicketImagesView;

@interface TicketDetailViewController : MemberDetailViewController

@property (nonatomic,retain)TicketImagesView *ticketImagesView;

@end