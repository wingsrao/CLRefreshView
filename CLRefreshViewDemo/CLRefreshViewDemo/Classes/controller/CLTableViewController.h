//
//  CLTableViewController.h
//  RefreshViewDemo
//
//  Created by 刘昶 on 14/11/26.
//  Copyright (c) 2014年 unknown. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum {
    CLRefreshTypeSimpleHeader = 1,
    CLRefreshTypeFloatHeader = 1 << 1,
    CLRefreshTypeSimpleFooter = 1 << 2,
    CLRefreshTypeAutoRefreshFooter = 1 << 3,
    CLRefreshTypeCustomLoadingView1 = 1 << 4,
    CLRefreshTypeCustomLoadingView2 = 1 << 5
}CLRefreshType;
@interface CLTableViewController : UITableViewController
@property (nonatomic,assign) CLRefreshType refreshType;
@end
