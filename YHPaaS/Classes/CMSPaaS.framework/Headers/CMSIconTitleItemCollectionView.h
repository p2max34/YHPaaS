//
//  CMSIconTitleItemCollectionView.h
//  cmsmobilesecurities
//
//  Created by liuyanliang on 2020/7/24.
//  Copyright © 2020 cms. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CMSIconTitleItem;

@interface CMSIconTitleItemCollectionView : UIView

@property (nonatomic, assign) BOOL showPageControl;
@property (nonatomic, assign) BOOL scrollEnabled;
@property (nonatomic, copy) NSArray<CMSIconTitleItem *> *items;
@property (nonatomic, copy) void (^itemSelectedBlock)(CMSIconTitleItem *item);

- (instancetype)initWithRows:(int)rows columns:(int)columns itemSize:(CGSize)itemSize padding:(UIEdgeInsets)padding;

- (instancetype)initWithColumns:(int)columns rowSpacing:(CGFloat)rowSpacing itemSize:(CGSize)itemSize padding:(UIEdgeInsets)padding;

@end

