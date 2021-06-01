//
//  CMSOtherTypeCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/1/15.
//

#import <UIKit/UIKit.h>
#import "CMSTableViewOC.h"
#import "CMSGridButtonCollectionViewCell.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^CMSQuoteOtherSelectTypeBlock)(CMSGridButtonItem *model);

@interface CMSOtherTypeCell : UITableViewCell

@property (nonatomic,copy) CMSQuoteOtherSelectTypeBlock selectOtherCellTypeBlock;

@property (nonatomic, strong) CMSTableSectionModelOC *model;

@end

NS_ASSUME_NONNULL_END
