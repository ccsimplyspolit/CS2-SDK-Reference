#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/DoorState_t.hpp"

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
        // Size: 0x1400
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BasePropDoor : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad13c0[0x10]; // 0x13c0
            // metadata: MNotSaved
            source2sdk::client::DoorState_t m_eDoorState; // 0x13d0            
            // metadata: MNotSaved
            bool m_modelChanged; // 0x13d4            
            // metadata: MNotSaved
            bool m_bLocked; // 0x13d5            
            // metadata: MNotSaved
            bool m_bNoNPCs; // 0x13d6            
            uint8_t _pad13d7[0x1]; // 0x13d7
            // metadata: MNotSaved
            VectorWS m_closedPosition; // 0x13d8            
            // metadata: MNotSaved
            QAngle m_closedAngles; // 0x13e4            
            // metadata: MNotSaved
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePropDoor> m_hMaster;
            char m_hMaster[0x4]; // 0x13f0            
            // metadata: MNotSaved
            VectorWS m_vWhereToSetLightingOrigin; // 0x13f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePropDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePropDoor) == 0x1400);
    };
};
