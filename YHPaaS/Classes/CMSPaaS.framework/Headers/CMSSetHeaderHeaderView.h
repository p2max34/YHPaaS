//
//  CMSSetHeaderHeaderView.h
//  SetHeader
//
//  Created by symbio on 2020/11/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSSetHeaderHeaderView : UITableViewHeaderFooterView
/// 字段说明
@property (nonatomic, strong) void(^descBlock)(void);
@end

NS_ASSUME_NONNULL_END
