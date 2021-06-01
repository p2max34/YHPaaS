//
//  CMSAdvancedSettingsheaderTableViewCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/11/24.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSAdvancedSettingsheaderTableViewCellStyle : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, assign) BOOL isFold;

@end

@interface CMSAdvancedSettingsheaderTableViewCell : UITableViewCell

@property (nonatomic, strong) CMSAdvancedSettingsheaderTableViewCellStyle *style;
@property (nonatomic, copy) void(^whetherFoldBlock)(BOOL isFold);

@end

NS_ASSUME_NONNULL_END
