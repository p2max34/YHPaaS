//
//  UIScrollView+CMSLoadCustomView.h
//  MZSample
//
//  Created by Michael on 2018/12/14.
//  Copyright © 2018年 michael. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSCommonEmptyView.h"
#import "CMSPageLoadingView.h"

@interface UIScrollView (CMSLoadCustomView)

- (void)contentLoadSucess:(UIView *(^__strong)(void))callCustomViewBlock;
- (void)contentLoadFailed:(UIView *(^__strong)(void))callCustomViewBlock;
- (void)contentStartLoading:(UIView *(^__strong)(void))callCustomViewBlock;
- (void)contentEndLoading;

@end



