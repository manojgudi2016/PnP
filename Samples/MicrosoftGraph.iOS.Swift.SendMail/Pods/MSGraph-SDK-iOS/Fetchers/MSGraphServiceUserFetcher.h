/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHSERVICEUSERFETCHER_H
#define MSGRAPHSERVICEUSERFETCHER_H

#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphServiceAssignedLicenseCollectionFetcher;
@class MSGraphServiceAssignedPlanCollectionFetcher;
@class MSGraphServicePasswordProfileFetcher;
@class MSGraphServiceProvisionedPlanCollectionFetcher;
@class MSGraphServiceDirectoryObjectCollectionFetcher;
@class MSGraphServiceDirectoryObjectFetcher;
@class MSGraphServiceMessageCollectionFetcher;
@class MSGraphServiceMailFolderCollectionFetcher;
@class MSGraphServiceCalendarFetcher;
@class MSGraphServiceCalendarCollectionFetcher;
@class MSGraphServiceCalendarGroupCollectionFetcher;
@class MSGraphServiceEventCollectionFetcher;
@class MSGraphServiceContactCollectionFetcher;
@class MSGraphServiceContactFolderCollectionFetcher;
@class MSGraphServiceProfilePhotoFetcher;
@class MSGraphServiceDriveFetcher;
@class MSGraphServiceDirectoryObjectCollectionFetcher;
@class MSGraphServiceDirectoryObjectFetcher;
@class MSGraphServiceMessageCollectionFetcher;
@class MSGraphServiceMailFolderCollectionFetcher;
@class MSGraphServiceCalendarFetcher;
@class MSGraphServiceCalendarCollectionFetcher;
@class MSGraphServiceCalendarGroupCollectionFetcher;
@class MSGraphServiceEventCollectionFetcher;
@class MSGraphServiceContactCollectionFetcher;
@class MSGraphServiceContactFolderCollectionFetcher;
@class MSGraphServiceProfilePhotoFetcher;
@class MSGraphServiceDriveFetcher;
@class MSGraphServiceDirectoryObjectFetcher;
@class MSGraphServiceMessageFetcher;
@class MSGraphServiceMailFolderFetcher;
@class MSGraphServiceCalendarFetcher;
@class MSGraphServiceCalendarGroupFetcher;
@class MSGraphServiceEventFetcher;
@class MSGraphServiceContactFetcher;
@class MSGraphServiceContactFolderFetcher;
@class MSGraphServiceUserOperations;


/** MSGraphServiceUserFetcher
 *
 */
@interface MSGraphServiceUserFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphServiceUserOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphServiceUser *, MSOrcError *))callback;
- (void)update:(MSGraphServiceUser *)user callback:(void (^)(MSGraphServiceUser *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphServiceUserFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceUserFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphServiceUserFetcher *)select:(NSString *)params;
- (MSGraphServiceUserFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=ownedDevices) MSGraphServiceDirectoryObjectCollectionFetcher *ownedDevices;

- (MSGraphServiceDirectoryObjectFetcher *)ownedDevicesById:(id)identifier;

@property (strong, nonatomic, readonly, getter=registeredDevices) MSGraphServiceDirectoryObjectCollectionFetcher *registeredDevices;

- (MSGraphServiceDirectoryObjectFetcher *)registeredDevicesById:(id)identifier;


@property (strong, nonatomic, readonly, getter=manager) MSGraphServiceDirectoryObjectFetcher *manager;
@property (strong, nonatomic, readonly, getter=directReports) MSGraphServiceDirectoryObjectCollectionFetcher *directReports;

- (MSGraphServiceDirectoryObjectFetcher *)directReportsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=memberOf) MSGraphServiceDirectoryObjectCollectionFetcher *memberOf;

- (MSGraphServiceDirectoryObjectFetcher *)memberOfById:(id)identifier;

@property (strong, nonatomic, readonly, getter=createdObjects) MSGraphServiceDirectoryObjectCollectionFetcher *createdObjects;

- (MSGraphServiceDirectoryObjectFetcher *)createdObjectsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=ownedObjects) MSGraphServiceDirectoryObjectCollectionFetcher *ownedObjects;

- (MSGraphServiceDirectoryObjectFetcher *)ownedObjectsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=messages) MSGraphServiceMessageCollectionFetcher *messages;

- (MSGraphServiceMessageFetcher *)messagesById:(id)identifier;

@property (strong, nonatomic, readonly, getter=mailFolders) MSGraphServiceMailFolderCollectionFetcher *mailFolders;

- (MSGraphServiceMailFolderFetcher *)mailFoldersById:(id)identifier;


@property (strong, nonatomic, readonly, getter=calendar) MSGraphServiceCalendarFetcher *calendar;
@property (strong, nonatomic, readonly, getter=calendars) MSGraphServiceCalendarCollectionFetcher *calendars;

- (MSGraphServiceCalendarFetcher *)calendarsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=calendarGroups) MSGraphServiceCalendarGroupCollectionFetcher *calendarGroups;

- (MSGraphServiceCalendarGroupFetcher *)calendarGroupsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=calendarView) MSGraphServiceEventCollectionFetcher *calendarView;

- (MSGraphServiceEventFetcher *)calendarViewById:(id)identifier;

@property (strong, nonatomic, readonly, getter=events) MSGraphServiceEventCollectionFetcher *events;

- (MSGraphServiceEventFetcher *)eventsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=contacts) MSGraphServiceContactCollectionFetcher *contacts;

- (MSGraphServiceContactFetcher *)contactsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=contactFolders) MSGraphServiceContactFolderCollectionFetcher *contactFolders;

- (MSGraphServiceContactFolderFetcher *)contactFoldersById:(id)identifier;


@property (strong, nonatomic, readonly, getter=photo) MSGraphServiceProfilePhotoFetcher *photo;

@property (strong, nonatomic, readonly, getter=drive) MSGraphServiceDriveFetcher *drive;

@end

#endif