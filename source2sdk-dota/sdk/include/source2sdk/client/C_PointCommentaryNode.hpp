#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CSoundPatch;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb20
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PointCommentaryNode : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad0ac0[0x18]; // 0xac0
            bool m_bActive; // 0xad8            
            bool m_bWasActive; // 0xad9            
            uint8_t _pad0ada[0x2]; // 0xada
            source2sdk::entity2::GameTime_t m_flEndTime; // 0xadc            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xae0            
            float m_flStartTimeInCommentary; // 0xae4            
            CUtlSymbolLarge m_iszCommentaryFile; // 0xae8            
            CUtlSymbolLarge m_iszTitle; // 0xaf0            
            CUtlSymbolLarge m_iszSpeakers; // 0xaf8            
            std::int32_t m_iNodeNumber; // 0xb00            
            std::int32_t m_iNodeNumberMax; // 0xb04            
            bool m_bListenedTo; // 0xb08            
            uint8_t _pad0b09[0x7]; // 0xb09
            source2sdk::client::CSoundPatch* m_sndCommentary; // 0xb10            
            // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hViewPosition;
            char m_hViewPosition[0x4]; // 0xb18            
            // metadata: MNotSaved
            bool m_bRestartAfterRestore; // 0xb1c            
            uint8_t _pad0b1d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointCommentaryNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointCommentaryNode) == 0xb20);
    };
};
