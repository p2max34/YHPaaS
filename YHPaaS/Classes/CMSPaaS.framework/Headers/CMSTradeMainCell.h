//
//  CMSTradeMainCell.h
//  CMSPaaSBenchmark
//
//  Created by SJ on 2020/10/15.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSComponentsGeneralCell.h"


NS_ASSUME_NONNULL_BEGIN


@interface CMSTradeMainCell : UITableViewCell

@property (nonatomic, strong) CMSComponentsGeneralModel *model;
@property (nonatomic, assign) CGFloat cellHeight;

@end


@interface CMSTradeTableFooterView : UITableViewHeaderFooterView

@end


@interface CMSTradeBannerCell : UICollectionViewCell

@property (strong, nonatomic) UIImageView *imageView;

@end


@interface CMSTradePageCell : UITableViewCell

@property (nonatomic, assign) CGFloat cellHeight;

@end


NS_ASSUME_NONNULL_END
