//
//  CMSQuoteStockIndexCollectionFooterView.h
//  CMSPaaS
//
//  Created by sway on 2021/2/4.
//

#import <UIKit/UIKit.h>
#import "CMSQuoteIconTitleModel.h"
NS_ASSUME_NONNULL_BEGIN
typedef void(^CMSQuoteStockIndexCollectionFooterDidSelectedBlock)(CMSQuoteIconTitleModel *selectItem, NSInteger index);

@interface CMSQuoteStockIndexCollectionFooterView : UICollectionReusableView

@property (nonatomic, copy) CMSQuoteStockIndexCollectionFooterDidSelectedBlock didSelectedBlock;
@property (nonatomic, strong) NSArray<CMSQuoteIconTitleModel *> *items;
@end

NS_ASSUME_NONNULL_END
