//
//  CMSCollectionGridPageLayout.h
//  cmsmobilesecurities
//
//  Created by liuyanliang on 2020/7/24.
//  Copyright © 2020 cms. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface CMSCollectionGridPageLayout : UICollectionViewLayout

@property (nonatomic, assign) UIEdgeInsets padding;
@property (nonatomic, assign) NSInteger rows;
@property (nonatomic, assign) NSInteger columns;
@property (nonatomic, assign) CGSize itemSize;
@property (nonatomic, assign) CGFloat rowSpacing;

@end

