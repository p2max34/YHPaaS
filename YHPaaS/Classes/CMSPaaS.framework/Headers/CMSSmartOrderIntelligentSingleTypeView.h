//
//  CMSSmartOrderIntelligentSingleTypeView.h
//  CMSPaaS
//
//  Created by symbio on 2020/12/2.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderProtocol.h"
/// 智能单类型 可多选
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderIntelligentSingleTypeView : UIView

@property (nonatomic, copy) NSArray<id<CMSSmartOrderConditionTypeModelProtocol>> * items;
/// item选中事件回调
@property (nonatomic, copy) void(^didSelectItemBlock)(NSArray<id<CMSSmartOrderConditionTypeModelProtocol>> * items);

@end

NS_ASSUME_NONNULL_END

