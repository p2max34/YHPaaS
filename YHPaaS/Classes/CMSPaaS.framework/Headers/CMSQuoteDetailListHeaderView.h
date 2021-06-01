//
//  CMSQuoteDetailListHeaderView.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/3.
//

#import <UIKit/UIKit.h>
#import "CMSStockHeaderModel.h"
#import "CMSSegmentHeaderView+CMSTheme.h"

NS_ASSUME_NONNULL_BEGIN

@class CMSAdaptWidthButtonItem,CMSQuotesCellTemplateModel,CMSSegmentButtonItem;

@interface CMSQuoteDetailListHeaderView : UIView

@property (nonatomic, strong) CMSSegmentHeaderView *segmentHeaderView;
@property (nonatomic, copy) NSString *currentTitle;

@property (nonatomic, strong) NSArray<CMSAdaptWidthButtonItem *> *adaptItems; // 按钮
@property (nonatomic, strong) NSArray<CMSSegmentButtonItem *> *segmentHeaders; // types

@property (nonatomic, copy) void(^selectAdaptItemCallBack)(CMSAdaptWidthButtonItem *item,NSInteger index);
@property (nonatomic, copy) void(^selectSegmentHeaderCallBack)(CMSSegmentButtonItem *item,NSInteger index);

@end

NS_ASSUME_NONNULL_END
