#include "PolarisAutoTest.h"

UPolarisAutoTest::UPolarisAutoTest() {
    this->AutoTestType = EAutoTest::OFF;
    this->CurrentTest = 0;
    this->State = 0;
    this->Counter = 0;
}

void UPolarisAutoTest::Wait(int32 NewWait, FLatentActionInfo LatentInfo) {
}


void UPolarisAutoTest::StartTest() {
}

void UPolarisAutoTest::RestartTest() {
}

bool UPolarisAutoTest::NextTest() {
    return false;
}

int32 UPolarisAutoTest::GetCurrentTestIndex() const {
    return 0;
}

UPolarisTestInterface* UPolarisAutoTest::GetCurrentTest() const {
    return NULL;
}

void UPolarisAutoTest::FinishTest() {
}

bool UPolarisAutoTest::ExecTest(float DeltaTime) {
    return false;
}

void UPolarisAutoTest::Delay(float Time, FLatentActionInfo LatentInfo) {
}

void UPolarisAutoTest::AutoTestLog(const FString& Text) {
}


