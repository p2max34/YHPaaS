//
//  CMSDatePeriodPickerView.h
//  cmsmobilesecurities
//
//  Created by Michael on 2018/8/22.
//  Copyright © 2018年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSDatePicker.h"

@interface CMSDatePeriodPickerView : UIView

@property (nonatomic, strong) NSDate *startDate;
@property (nonatomic, strong) NSDate *endDate;
@property (nonatomic, copy) void(^didSelectDatePeriod)(NSDate *startDate, NSDate *endDate);

@property (nonatomic, strong, readonly) CMSDatePicker *datePicker;

@end
