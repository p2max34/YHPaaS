//
//  CMSDropDownDatePickerView.h
//  cmsmobilesecurities
//
//  Created by Michael on 2019/6/27.
//  Copyright © 2019 cms. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSDatePicker.h"

typedef NS_ENUM(NSUInteger, CMSDatePickerType)
{
    CMSDatePickerTypeCustom                             =  0,       // 仅用于标示状态，不展示
    CMSDatePickerTypeToday                              =  1,
    // 截止到昨日
    CMSDatePickerTypeNearlyAMonth                       =  2,
    CMSDatePickerTypeNearlyThreeMonths                  =  3,
    CMSDatePickerTypeNearlyHalfAYear                    =  4,
    CMSDatePickerTypeNearlyAYear                        =  5,
    // 截止到今日
    CMSDatePickerTypeNearlyAMonthIncludingToday         =  6,
    CMSDatePickerTypeNearlyThreeMonthsIncludingToday    =  7,
    CMSDatePickerTypeNearlyHalfAYearIncludingToday      =  8,
    CMSDatePickerTypeNearlyAYearIncludingToday          =  9
};


@interface CMSDropDownDatePickerView : UIView

@property (nonatomic, strong, readonly) NSDate *startDate;
@property (nonatomic, strong, readonly) NSDate *endDate;
@property (nonatomic, copy, readonly) NSString *title;
@property (nonatomic, copy) void(^didSelectDatePeriod)(NSString *title, NSDate *startDate, NSDate *endDate);

@property (nonatomic, strong, readonly) CMSDatePicker *datePicker;

@property (nonatomic, assign, readonly) CMSDatePickerType selectedType;   // default is CMSDatePickerTypeCustom.


- (instancetype)initWithFrame:(CGRect)frame datePickerTypes:(NSArray *)types selectedType:(CMSDatePickerType)selectedType;

@end
