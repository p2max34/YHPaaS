//
//  CMSQuoteGTBreadthView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/1/11.
//

#import <UIKit/UIKit.h>
#import "CMSStockProtocol.h"
NS_ASSUME_NONNULL_BEGIN

typedef void(^CMSQuoteGTBreadthViewClickedBlock)(NSString *uri);

@interface CMSQuoteGTBreadthView : UIView

@property (nonatomic, copy) CMSQuoteGTBreadthViewClickedBlock clickedBlock;
@property (nonatomic, strong) NSArray<id<CMSStockProtocol> > *dataModel;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSString *name;

- (instancetype)initWithFrame:(CGRect)frame
                    DataModel:(NSArray<id<CMSStockProtocol> >  * _Nullable )model
                 clickedBlock:(CMSQuoteGTBreadthViewClickedBlock)clickedBlock;

@end

NS_ASSUME_NONNULL_END
