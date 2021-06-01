//
//  CMSSmartOrderDateOptionCell.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/28.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSSmartTradeCommonDefine.h"
#import "CMSSmartTradeOrderModel.h"
#define LONGTERM_VALID_DATE @"2099-01-01"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderDateOptionCellStyle : NSObject

@property (nonatomic, copy) NSString *mainTitle;
@property (nonatomic, copy) NSString *switchDesName;
@property (nonatomic, copy) NSString *quickOptionsDesName;
@property (nonatomic, copy) NSArray<NSNumber *> *quickOptions;
@property (nonatomic, assign) int dayOptions;
@property (nonatomic, assign) int defaultSelectedDay;
@property (nonatomic, copy) NSString *startDatefield;
@property (nonatomic, copy) NSString *endDateField;

@end

@interface CMSSmartOrderDateOptionCell : UITableViewCell

@property (nonatomic, strong) CMSSmartOrderDateOptionCellStyle *style;

@property (nonatomic, copy) void(^selectedBlock)(NSString *beginDate, NSString *endDate);

- (void)updateUIWithEndDate:(NSString *)endDate;

@end

NS_ASSUME_NONNULL_END
