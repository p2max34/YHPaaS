//
//  CMSMonitoringTimePickerView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/10/16.
//

#import "CMSMonitoringPickerView.h"
@class CMSMonitoringTimePickerView;

NS_ASSUME_NONNULL_BEGIN

@protocol  CMSPickerMonitoringTimeViewDelegate<NSObject>

- (void)pickerArea:(CMSMonitoringTimePickerView *)pickerArea selectHourStartTime:(NSString *)hourStart selectMinuteStartTime:(NSString *)minuteStrat selectHourOverTime:(NSString *)hourOver selectMinuteOverTime:(NSString *)minuteOver;

@end

@interface CMSMonitoringTimePickerView : CMSMonitoringPickerView

@property(nonatomic, weak)id <CMSPickerMonitoringTimeViewDelegate> delegate ;

- (instancetype)initWithHourStartStr:(NSString *)hourStartStr
                      minuteStartStr:(NSString *)minuteStartStr
                         hourOverStr:(NSString *)hourOverStr
                       minuteOverStr:(NSString *)minuteOverStr;

@end

NS_ASSUME_NONNULL_END
