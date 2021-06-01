//
//  CMSSmartOrderIntelligentSingleCollectionViewCell.h
//  CMSPaaS
//
//  Created by symbio on 2020/12/2.
//

#import <UIKit/UIKit.h>
#import "CMSSmartOrderProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderIntelligentSingleCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) id<CMSSmartOrderConditionTypeModelProtocol> model;
@end

NS_ASSUME_NONNULL_END
