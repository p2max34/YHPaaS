//
//  CMSQuoteOtherTypeShowCellViewModel.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/3/1.
//

#import "CMSQuotesCellViewModel.h"
#import "CMSQuoteRestTypeModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteOtherTypeShowCellViewModel : CMSQuotesCellViewModel
@property (nonatomic, strong) CMSQuoteRestTypeModel  *otherItems;
@end

NS_ASSUME_NONNULL_END
