//
//  CMSNavigationBar.h
//  CMSPaaS
//
//  Created by liuyanliang on 2020/8/20.
//  Copyright © 2020 cmschina. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CMSNavigationButtonItem : NSObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, assign) BOOL changeColor;
@property (nonatomic, copy) NSString *badge;

@end

@interface CMSNavigationTitleItem : NSObject

@property (nonatomic, copy) NSString *type;  // 支持searchBar、text
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *uri;

@end

@interface UIView(NavigationButtonItem)

@property (nonatomic, strong) CMSNavigationButtonItem *navigationButtonItem;

@end

@interface CMSNavigationBar : UIView

@property (nonatomic, copy) NSArray<UIView *> *leftViews;
@property (nonatomic, copy) NSArray<UIView *> *rightViews;
@property (nonatomic, strong) UIView *titleView;
@property (nonatomic, strong) UIColor *originTitleTintColor;

- (instancetype)initWithFrame:(CGRect)frame
                    leftItems:(NSArray<CMSNavigationButtonItem *> *)leftItems
                   rightItems:(NSArray<CMSNavigationButtonItem *> *)rightItems
                    titleItem:(CMSNavigationTitleItem *)titleItem;

@end
