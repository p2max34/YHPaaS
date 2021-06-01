//
//  CMSSmartOrderConditionTypeView.h
//  CMSPaaS
//
//  Created by symbio on 2020/11/27.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderConditionTypeView : UIView
/// 智能下单条件类型数据
@property (nonatomic, strong) NSArray<id<CMSSmartOrderConditionTypeModelProtocol>> * items;

/// item选中事件回调
@property (nonatomic, strong) void(^didSelectItemBlock)(id<CMSSmartOrderConditionTypeModelProtocol> item);

/// 关闭回调
@property (nonatomic, strong) void(^closeBlock)(void);

/// 带标题的初始化
- (instancetype)initWithFrame:(CGRect)frame title:( NSString * __nullable)title;
@end

NS_ASSUME_NONNULL_END


