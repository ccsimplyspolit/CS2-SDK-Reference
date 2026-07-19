#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_InfoLadderDismount;
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
        // Size: 0x1008
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_FuncLadder : public source2sdk::client::C_BaseModelEntity
        {
        public:
            Vector m_vecLadderDir; // 0xfb0            
            uint8_t _pad0fbc[0x4]; // 0xfbc
            // metadata: MNotSaved
            // m_Dismounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_InfoLadderDismount>> m_Dismounts;
            char m_Dismounts[0x18]; // 0xfc0            
            Vector m_vecLocalTop; // 0xfd8            
            VectorWS m_vecPlayerMountPositionTop; // 0xfe4            
            VectorWS m_vecPlayerMountPositionBottom; // 0xff0            
            float m_flAutoRideSpeed; // 0xffc            
            bool m_bDisabled; // 0x1000            
            bool m_bFakeLadder; // 0x1001            
            bool m_bHasSlack; // 0x1002            
            uint8_t _pad1003[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncLadder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncLadder) == 0x1008);
    };
};
