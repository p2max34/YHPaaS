//
//  CMSHistogramModel.h
//  CMSHistogramViewDemo
//
//  Created by HJ on 2021/1/13.
//  Copyright © 2021 HJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@protocol CMSHistogramModelProtocol <NSObject>

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UIColor *titleColor;
@property (nonatomic, strong) UIFont *titleFont;
@property (nonatomic, strong) UIFont *detailFont;
@property (nonatomic, strong) NSString *detail;
@property (nonatomic, strong) UIColor *detailColor;
@property (nonatomic, strong) UIColor *barColor;
@property (nonatomic, assign) double  barValue;
@property (nonatomic, assign) double  totalValue;
/// 默认 0
@property (nonatomic, assign) BOOL  handleBigNumber;
/// 是否是负数  默认是整数
@property (nonatomic, assign) BOOL  isNegativeNumber;
@property (nonatomic, strong) NSString *theme_titleColorKey;
@property (nonatomic, strong) NSString *theme_detailColorKey;
@property (nonatomic, strong) NSString *theme_barColorKey;

@end


@protocol PercentStatisticsHorizontal<NSObject>

@property (nonatomic, strong) NSString *riseString;
@property (nonatomic, strong) NSString *fallString;
@property (nonatomic, assign) double  equalValue;
@property (nonatomic, assign) double  riseValue;
@property (nonatomic, assign) double  fallValue;

@property (nonatomic, strong) NSString *theme_riseColorKey;
@property (nonatomic, strong) NSString *theme_fallColorKey;
@property (nonatomic, strong) NSString *theme_equalColorKey;

@end


@interface CMSHistogramModel : NSObject <CMSHistogramModelProtocol,PercentStatisticsHorizontal>


@end




NS_ASSUME_NONNULL_END
