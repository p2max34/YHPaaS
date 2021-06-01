//
//  CMSDatePicker.h
//  cmsmobilesecurities
//
//  Created by Michael on 2018/8/24.
//  Copyright © 2018年 cms. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CMSDatePicker : UIDatePicker

@property (nonatomic, copy) void(^didSelectDate)(NSDate *date);

- (void)show;

@end
