//
//  CMSMonitoringWeekPickerView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/10/15.
//

#import "CMSMonitoringPickerView.h"
@class CMSMonitoringWeekPickerView;

NS_ASSUME_NONNULL_BEGIN

@protocol  CMSPickerMonitoringWeekViewDelegate<NSObject>

- (void)pickerArea:(CMSMonitoringWeekPickerView *)pickerArea selectStartWeek:(NSString *)start selectOverWeek:(NSString *)over;

@end

@interface CMSMonitoringWeekPickerView : CMSMonitoringPickerView
@property(nonatomic, weak)id <CMSPickerMonitoringWeekViewDelegate> delegate ;
@end

NS_ASSUME_NONNULL_END
