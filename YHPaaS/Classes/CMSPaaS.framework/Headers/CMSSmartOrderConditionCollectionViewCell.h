//
//  CMSSmartOrderConditionCollectionViewCell.h
//  CMSPaaS
//
//  Created by symbio on 2020/11/27.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/// 条件单类型视图
@interface CMSSmartOrderConditionCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) id<CMSSmartOrderConditionTypeModelProtocol> model;
@end

NS_ASSUME_NONNULL_END
