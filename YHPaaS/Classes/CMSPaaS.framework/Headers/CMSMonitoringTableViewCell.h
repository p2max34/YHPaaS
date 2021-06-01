//
//  CMSMonitoringTableViewCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/10/14.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSMonitoringTableViewCellStyle : NSObject

@property (nonatomic, copy) NSString *timeType;
@property (nonatomic, copy) NSString *beginField;
@property (nonatomic, copy) NSString *endField;
@property (nonatomic, copy) NSString *enableField;
@end

@interface CMSMonitoringTableViewCell : UITableViewCell

@property (nonatomic, strong) CMSMonitoringTableViewCellStyle *style;
@property (nonatomic, copy) void(^weekChangedBlock)(NSString *start, NSString *over);
@property (nonatomic, copy) void(^timeChangedBlock)(NSString *start, NSString *over);

@property (nonatomic, strong) UILabel *monitoringTimeLabel;
@property (nonatomic, strong) UIButton *selectTimeClickBtn;

- (void)updateUIWithWeekData:(NSString *)beginData end:(NSString *)endData;

- (void)updateUIWithTimeData:(NSString *)beginTime end:(NSString *)endTime;

@end

NS_ASSUME_NONNULL_END
