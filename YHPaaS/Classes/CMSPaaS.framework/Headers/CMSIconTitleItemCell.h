//
//  CMSIconTitleItemCell.h
//  cmsmobilesecurities
//
//  Created by liuyanliang on 2020/7/24.
//  Copyright © 2020 cms. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CMSIconTitleItem : NSObject

@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *badge;

@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, strong) NSString *theme_textColorKey;
@property (nonatomic, strong) NSString *theme_iconKey;
@property (nonatomic, assign) CGFloat iconSize;

@property (nonatomic, copy) NSString *display;
@property (nonatomic, assign) BOOL hidden;

@end

@interface CMSIconTitleItemCell : UICollectionViewCell

@property (nonatomic, strong) CMSIconTitleItem *item;

@end

