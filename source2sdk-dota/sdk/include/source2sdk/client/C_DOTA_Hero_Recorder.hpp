#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTAPlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa00
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Hero_Recorder : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bStartRecording; // 0x5f0            
            uint8_t _pad05f1[0x3]; // 0x5f1
            // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hHero;
            char m_hHero[0x4]; // 0x5f4            
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTAPlayerController> m_hPlayer;
            char m_hPlayer[0x4]; // 0x5f8            
            bool m_bRecording; // 0x5fc            
            bool m_bLastStartRecording; // 0x5fd            
            uint8_t _pad05fe[0x2]; // 0x5fe
            float m_flLastCycle; // 0x600            
            std::int32_t m_nCompletedCycles; // 0x604            
            std::int32_t m_nFramesThisCycle; // 0x608            
            std::int32_t m_nRecordedFrames; // 0x60c            
            float m_flHeroAdvanceTime; // 0x610            
            float m_flStartTime; // 0x614            
            // m_flCycles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flCycles;
            char m_flCycles[0x18]; // 0x618            
            // m_pBatchFiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString*> m_pBatchFiles;
            char m_pBatchFiles[0x18]; // 0x630            
            uint8_t _pad0648[0x3b8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Hero_Recorder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Hero_Recorder) == 0xa00);
    };
};
