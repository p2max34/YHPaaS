//
//  CMSTitleCollectionViewCell.h
//  CMSDragCollectionView_v1
//
//  Created by symbio on 2020/11/3.
//

#import <UIKit/UIKit.h>
#import "CMSStockProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSTitleCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) UILabel *titleLabel;

@property (nonatomic, strong) id<CMSStockProtocol> model;

/// 选中状态
@property (nonatomic, assign) BOOL selectedStatus;

@end

NS_ASSUME_NONNULL_END
