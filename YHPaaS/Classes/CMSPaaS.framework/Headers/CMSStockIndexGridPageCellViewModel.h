//
//  CMSStockIndexGridPageCellViewModel.h
//  CMSPaaS
//
//  Created by 吴演 on 2021/3/5.
//

#import "CMSQuotesIndexSelectViewModel.h"
#import "CMSQuotesSotckIndexModel.h"
#import "CMSQuotesCellViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSStockIndexGridPageCellViewModel : CMSQuotesCellViewModel
/// 指数选择VM
@property (nonatomic, strong) CMSQuotesIndexSelectViewModel *indexSelectViewModel;
@property (nonatomic, strong) CMSQuotesSotckIndexModel *dataModel;
@property (nonatomic, assign) CGFloat topPadding;
@end

NS_ASSUME_NONNULL_END
